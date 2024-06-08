/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(ofdm_carrier_preamble.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(94a676eda043e99aff85b5fd93377a22)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/customs/ofdm_carrier_preamble.h>
// pydoc.h is automatically generated in the build directory
#include <ofdm_carrier_preamble_pydoc.h>

void bind_ofdm_carrier_preamble(py::module& m)
{

    using ofdm_carrier_preamble    = gr::customs::ofdm_carrier_preamble;


    py::class_<ofdm_carrier_preamble, gr::tagged_stream_block, gr::block, gr::basic_block,
        std::shared_ptr<ofdm_carrier_preamble>>(m, "ofdm_carrier_preamble", D(ofdm_carrier_preamble))

        .def(py::init(&ofdm_carrier_preamble::make),
           D(ofdm_carrier_preamble,make)
        )
        



        ;




}








