# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: head/textproc/xxdiff-scripts/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	xxdiff
PORTVERSION=	4.0.1
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF
PKGNAMESUFFIX=	-scripts

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Helper scripts for xxdiff

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	xxdiff:textproc/xxdiff

USES=		python:2.7 tar:bzip2
USE_PYTHON=	autoplist distutils
PYDISTUTILS_PKGNAME=	xxdiff-scripts
NO_ARCH=	yes

.include <bsd.port.mk>
