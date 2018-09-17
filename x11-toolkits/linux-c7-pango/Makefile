# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/x11-toolkits/linux-c7-pango/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	pango
PORTVERSION=	1.40.4
CATEGORIES=	x11-toolkits linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Pango library (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	cairo fontconfig harfbuzz libthai xorglibs
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
