# Created by: ijliao
# $FreeBSD: head/www/py-imdbpy/Makefile 464750 2018-03-17 04:23:44Z sunpoet $

PORTNAME=	imdbpy
PORTVERSION=	6.4.1
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP \
		SF/${PORTNAME}/IMDbPY/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	IMDbPY-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Retrieve and manage the data of the IMDb movie database

LICENSE=	GPLv2 GPLv3
LICENSE_COMB=	dual

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}lxml>=0:devel/py-lxml@${FLAVOR}

OPTIONS_DEFINE=	DOCS SQLALCHEMY
OPTIONS_DEFAULT=SQLALCHEMY
SQLALCHEMY_DESC=SQLAlchemy support

NO_ARCH=	yes
USES=		python shebangfix
USE_PYTHON=	autoplist distutils
SHEBANG_FILES=	docs/goodies/download_applydiffs.py \
		docs/goodies/reduce.sh

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

SQLALCHEMY_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}sqlalchemy11>=0:databases/py-sqlalchemy11@${FLAVOR}

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/docs/ && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
