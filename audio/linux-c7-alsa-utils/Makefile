# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/audio/linux-c7-alsa-utils/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	alsa-utils
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	audio linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Advanced Linux Sound Architecture utilities (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	GPLv3

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.el7
USES=		linux:c7
USE_LINUX=	alsalib alsa-plugins-oss
USE_LINUX_RPM=	nolib

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
