# Created by: Carlo Strub
# $FreeBSD: head/devel/bzr-svn/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	bzr-svn
PORTVERSION=	1.2.2
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	https://launchpadlibrarian.net/102178824/ \
		http://www.c-s.li/ports/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Plugin for bzr to work with svn

LICENSE=	GPLv2

BUILD_DEPENDS+=	bzr:devel/bzr
RUN_DEPENDS+=	${PYTHON_SITELIBDIR}/subvertpy/__init__.py:devel/py-subvertpy@${PY_FLAVOR} \
		bzr:devel/bzr

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
