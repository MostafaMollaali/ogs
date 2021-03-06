/**
 * \file
 * \copyright
 * Copyright (c) 2012-2020, OpenGeoSys Community (http://www.opengeosys.org)
 *            Distributed under a Modified BSD License.
 *              See accompanying file LICENSE.txt or
 *              http://www.opengeosys.org/project/license
 *
 */

#pragma once

#include <memory>
#include <vector>

namespace ChemistryLib
{
namespace PhreeqcIOData
{
struct Output;
struct Component;
struct EquilibriumReactant;
struct KineticReactant;
struct UserPunch;

std::unique_ptr<Output> createOutput(
    std::vector<Component> const& components,
    std::vector<EquilibriumReactant> const& equilibrium_reactants,
    std::vector<KineticReactant> const& kinetic_reactants,
    std::unique_ptr<UserPunch> const& user_punch,
    bool const use_high_precision,
    std::string const& project_file_name);
}  // namespace PhreeqcIOData
}  // namespace ChemistryLib
