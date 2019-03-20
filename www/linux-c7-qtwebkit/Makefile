# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/www/linux-c7-qtwebkit/Makefile 495971 2019-03-16 22:24:07Z tcberner $

PORTNAME=	qtwebkit
PORTVERSION=	2.3.4
PORTREVISION=	2
CATEGORIES=	www linux
MASTER_SITES=	EPEL7/q

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Qt WebKit implementation (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-qt47-webkit-[0-9]*

DESCR=		${.CURDIR}/../../devel/linux-c6-qt47/pkg-descr
ONLY_FOR_ARCHS=	amd64
RPMVERSION=	6.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	fontconfig png xorglibs sqlite3 qt qt-x11
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
