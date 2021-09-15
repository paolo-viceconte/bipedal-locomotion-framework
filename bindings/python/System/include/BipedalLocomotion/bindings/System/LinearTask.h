/**
 * @file LinearTask.h
 * @authors Paolo Maria Viceconte
 * @copyright 2021 Istituto Italiano di Tecnologia (IIT). This software may be modified and
 * distributed under the terms of the GNU Lesser General Public License v2.1 or any later version.
 */

#ifndef BIPEDAL_LOCOMOTION_SYSTEM_LINEAR_TASK_H
#define BIPEDAL_LOCOMOTION_SYSTEM_LINEAR_TASK_H

#include <pybind11/pybind11.h>

namespace BipedalLocomotion
{
namespace bindings
{
namespace System
{

void CreateLinearTask(pybind11::module& module);

} // namespace System
} // namespace bindings
} // namespace BipedalLocomotion

#endif // BIPEDAL_LOCOMOTION_SYSTEM_LINEAR_TASK_H
