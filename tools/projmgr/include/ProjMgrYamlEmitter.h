/*
 * Copyright (c) 2020-2022 Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef PROJMGRYAMLEMITTER_H
#define PROJMGRYAMLEMITTER_H

#include "ProjMgrWorker.h"

/**
  * @brief projmgr emitter yaml class
*/
class ProjMgrYamlEmitter {
public:
  /**
   * @brief class constructor
  */
  ProjMgrYamlEmitter(void);

  /**
   * @brief class destructor
  */
  ~ProjMgrYamlEmitter(void);

  /**
   * @brief generate cbuild-idx.yml file
   * @param parser reference
   * @param contexts vector with pointers to contexts
   * @param outputDir directory
   * @return true if executed successfully
  */
  static bool GenerateCbuildIndex(ProjMgrParser& parser, const std::vector<ContextItem*> contexts, const std::string& outputDir);

  /**
   * @brief generate cbuild-gen-idx.yml file
   * @param parser reference
   * @param contexts vector with pointers to sibling contexts
   * @param type project type
   * @param outdir output directory
   * @param gendir generated files directory
   * @return true if executed successfully
  */
  static bool GenerateCbuildGenIndex(ProjMgrParser& parser, const std::vector<ContextItem*> siblings,
    const std::string& type, const std::string& outdir, const std::string& gendir);

  /**
   * @brief generate cbuild.yml or cbuild-gen.yml file
   * @param context pointer to the context
   * @param reference to generator identifier
   * @param reference to generator pack
   * @return true if executed successfully
  */
  static bool GenerateCbuild(ContextItem* context, const std::string& generatorId = std::string(), const std::string& generatorPack = std::string());

  /**
   * @brief generate cbuild set file
   * @param contexts vector with pointers to contexts
   * @return true if executed successfully
  */
  static bool GenerateCbuildSet(ProjMgrParser& parser, const std::vector<ContextItem*> contexts, const std::string& selectedCompiler);
};

#endif  // PROJMGRYAMLEMITTER_H
