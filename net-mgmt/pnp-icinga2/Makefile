# $FreeBSD: head/net-mgmt/pnp-icinga2/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTREVISION=	1
PKGNAMESUFFIX=	-icinga2

MAINTAINER=	lme@FreeBSD.org
COMMENT=	Icinga2 performance data collector and grapher

MASTERDIR=	${.CURDIR}/../pnp

RUN_DEPENDS=	${LOCALBASE}/bin/rrdtool:databases/rrdtool \
		${LOCALBASE}/www/icingaweb2/public/index.php:net-mgmt/icingaweb2

NAGIOSDIR?=	/var/spool/icinga2
NAGIOSHTMURL?=	/icingaweb2
NAGIOSUSER?=	icinga
NAGIOSGROUP?=	icinga

.include "${MASTERDIR}/Makefile"
