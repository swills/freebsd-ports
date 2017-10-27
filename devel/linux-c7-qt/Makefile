# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/devel/linux-c7-qt/Makefile 452945 2017-10-26 19:23:18Z tijl $

PORTNAME=	qt
PORTVERSION=	4.8.5
PORTREVISION=	3
CATEGORIES=	devel linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	RPM of QT4 (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}47-[0-9]*

DATADIR=	${PREFIX}/usr/share/${PORTNAME}4
DESCR=		${.CURDIR}/../../devel/${PORTNAME}4/pkg-descr
RPMVERSION=	15.el7_4
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	fontconfig png dbuslibs sqlite3 openssl
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
