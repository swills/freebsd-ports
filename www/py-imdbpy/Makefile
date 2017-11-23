# Created by: ijliao
# $FreeBSD: head/www/py-imdbpy/Makefile 454565 2017-11-20 14:32:23Z sunpoet $

PORTNAME=	imdbpy
PORTVERSION=	6.2
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP \
		SF/${PORTNAME}/IMDbPY/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	IMDbPY-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Retrieve and manage the data of the IMDb movie database

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>=0:devel/py-lxml

OPTIONS_DEFINE=	DOCS SQLALCHEMY
OPTIONS_DEFAULT=SQLALCHEMY
SQLALCHEMY_DESC=SQLAlchemy support

NO_ARCH=	yes
USES=		python shebangfix
USE_PYTHON=	autoplist distutils
SHEBANG_FILES=	docs/goodies/download_applydiffs.py \
		docs/goodies/reduce.sh

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

SQLALCHEMY_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlalchemy-migrate>=0.10.0:databases/py-sqlalchemy-migrate \
			${PYTHON_PKGNAMEPREFIX}sqlalchemy10>=0:databases/py-sqlalchemy10

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/docs/ && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
