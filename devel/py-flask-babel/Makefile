# Created by: Olivier Duchateau <duchateau.olivier@gmail.com>
# $FreeBSD: head/devel/py-flask-babel/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	Flask-Babel
PORTVERSION=	0.11.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Adds i18n/l10n support to Flask applications

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0.10:www/py-flask@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}Babel>=2.3:devel/py-babel@${FLAVOR}

NO_ARCH=	yes
USE_PYTHON=	autoplist distutils
USES=		python

.include <bsd.port.mk>
