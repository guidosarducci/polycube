/**
* firewall API generated from firewall.yang
*
* NOTE: This file is auto generated by polycube-codegen
* https://github.com/polycube-network/polycube-codegen
*/


/* Do not edit this file manually */


#include "ChainStatsBase.h"
#include "../Firewall.h"

ChainStatsBase::ChainStatsBase(Chain &parent)
    : parent_(parent) {}

ChainStatsBase::~ChainStatsBase() {}

void ChainStatsBase::update(const ChainStatsJsonObject &conf) {

}

ChainStatsJsonObject ChainStatsBase::toJsonObject() {
  ChainStatsJsonObject conf;

  conf.setId(getId());
  conf.setPkts(getPkts());
  conf.setBytes(getBytes());
  conf.setSrc(getSrc());
  conf.setDst(getDst());
  conf.setL4proto(getL4proto());
  conf.setSport(getSport());
  conf.setDport(getDport());
  conf.setTcpflags(getTcpflags());
  conf.setConntrack(getConntrack());
  conf.setAction(getAction());
  conf.setDescription(getDescription());

  return conf;
}

std::shared_ptr<spdlog::logger> ChainStatsBase::logger() {
  return parent_.logger();
}

