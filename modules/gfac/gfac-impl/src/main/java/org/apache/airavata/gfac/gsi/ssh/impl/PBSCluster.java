/*
 *
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 *
*/
package org.apache.airavata.gfac.gsi.ssh.impl;

import org.apache.airavata.gfac.core.authentication.AuthenticationInfo;
import org.apache.airavata.gfac.core.SSHApiException;
import org.apache.airavata.gfac.core.cluster.ServerInfo;
import org.apache.airavata.gfac.core.JobManagerConfiguration;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;


/**
 * This is the default implementation of a cluster.
 * this has most of the methods to be used by the end user of the
 * library.
 */
public class PBSCluster extends GSISSHAbstractCluster {
    private static final Logger log = LoggerFactory.getLogger(PBSCluster.class);


    public PBSCluster(JobManagerConfiguration jobManagerConfiguration) {
        super(jobManagerConfiguration);
    }
    public PBSCluster(ServerInfo serverInfo, AuthenticationInfo authenticationInfo, JobManagerConfiguration config) throws SSHApiException {
        super(serverInfo, authenticationInfo,config);
    }
}
