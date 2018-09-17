# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/devel/linux-c6-dbus-glib/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	dbus-glib
PORTVERSION=	0.86
PORTREVISION=	4
CATEGORIES=	devel linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	GLib bindings for D-Bus (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	6.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	dbuslibs expat
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
