# $FreeBSD: head/ports-mgmt/port-maintenance-tools/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	port-maintenance-tools
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	ports-mgmt

MAINTAINER=	jgh@FreeBSD.org
COMMENT=	Meta-port for administrative tools to maintain ports

USES=	metaport

RUN_DEPENDS=	\
		${LOCALBASE}/sbin/portupgrade:ports-mgmt/portupgrade \
		${LOCALBASE}/bin/svn:devel/subversion \
		${LOCALBASE}/sbin/pkg_cutleaves:ports-mgmt/pkg_cutleaves \
		${LOCALBASE}/bin/pkg_tree:ports-mgmt/pkg_tree \
		${LOCALBASE}/sbin/portdowngrade:ports-mgmt/portdowngrade

.include <bsd.port.mk>
