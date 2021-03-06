#ifndef OPENMM_ANI_FORCE_PROXY_H_
#define OPENMM_ANI_FORCE_PROXY_H_

/* -------------------------------------------------------------------------- *
 * The MIT License
 *
 * SPDX short identifier: MIT
 *
 * Copyright 2019 Genentech Inc. South San Francisco
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * -------------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- *
 * Portions of this software were derived from code originally developed
 * by Peter Eastman and copyrighted by Stanford University and the Authors
 * -------------------------------------------------------------------------- */


#include "internal/windowsExportANI.h"
#include "openmm/serialization/SerializationProxy.h"


const std::string ANI_SERIALIZATION_FILE="OpenMM_ANISer.txt";


namespace OpenMM {

/**
 * This is a proxy for serializing ANIForce objects.
 */

class OPENMM_EXPORT_NN ANIForceProxy : public SerializationProxy {
public:
    ANIForceProxy();
    void serialize(const void* object, SerializationNode& node) const;
    void* deserialize(const SerializationNode& node) const;


};

} // namespace OpenMM

#endif /*OPENMM_ANI_FORCE_PROXY_H_*/
