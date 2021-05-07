/**
 * @file CoMTask.cpp
 * @authors Paolo Maria Viceconte
 * @copyright 2021 Istituto Italiano di Tecnologia (IIT). This software may be modified and
 * distributed under the terms of the GNU Lesser General Public License v2.1 or any later version.
 */

#include <pybind11/eigen.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include <BipedalLocomotion/System/LinearTask.h>
#include <BipedalLocomotion/IK/CoMTask.h>
#include <BipedalLocomotion/bindings/IK/CoMTask.h>

namespace BipedalLocomotion
{
namespace bindings
{
namespace IK
{

void CreateCoMTask(pybind11::module& module)
{
    namespace py = ::pybind11;
    using namespace BipedalLocomotion::IK;
    using namespace BipedalLocomotion::System;

    py::class_<CoMTask, LinearTask>(module, "CoMTask")
        .def(py::init())
        .def("initialize",
            [](CoMTask& impl,
               std::shared_ptr<const BipedalLocomotion::ParametersHandler::IParametersHandler>
                   paramHandler) -> bool { return impl.initialize(paramHandler); },
            py::arg("paramHandler"))
        .def("set_kin_dyn",
             &CoMTask::setKinDyn,
             py::arg("kinDyn"))
        .def("set_variables_handler",
             &CoMTask::setVariablesHandler,
             py::arg("variablesHandler"))
        .def("set_set_point",
             &CoMTask::setSetPoint,
             py::arg("position"),
             py::arg("velocity"));
}
}
}
}