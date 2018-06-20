# Created by: Carlo Strub
# $FreeBSD: head/devel/bzr-git/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	bzr-git
PORTVERSION=	0.6.8
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	https://launchpadlibrarian.net/98666746/ \
		http://www.c-s.li/ports/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Plugin for bzr to work with git trees

LICENSE=	GPLv2

BUILD_DEPENDS=	bzr:devel/bzr
RUN_DEPENDS=	bzr:devel/bzr \
		${PYTHON_PKGNAMEPREFIX}dulwich>=0.8.0:devel/dulwich@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}sqlite3>0:databases/py-sqlite3@${PY_FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
