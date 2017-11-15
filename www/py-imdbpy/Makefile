# Created by: ijliao
# $FreeBSD: head/www/py-imdbpy/Makefile 454142 2017-11-13 19:36:22Z sunpoet $

PORTNAME=	imdbpy
PORTVERSION=	6.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP \
		SF/${PORTNAME}/IMDbPY/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	IMDbPY-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Retrieve and manage the data of the IMDb movie database

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>=0:devel/py-lxml \
		${PYTHON_PKGNAMEPREFIX}sqlalchemy-migrate>=0.10.0:databases/py-sqlalchemy-migrate \
		${PYTHON_PKGNAMEPREFIX}sqlalchemy10>=0:databases/py-sqlalchemy10

OPTIONS_DEFINE=	DOCS

NO_ARCH=	yes
USES=		python shebangfix
USE_PYTHON=	autoplist distutils
SHEBANG_FILES=	docs/goodies/download_applydiffs.py \
		docs/goodies/reduce.sh

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/docs/ && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
