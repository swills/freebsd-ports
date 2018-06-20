# $FreeBSD: head/mail/py-flask-mail/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	Flask-Mail
PORTVERSION=	0.9.1
CATEGORIES=	mail www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	john@saltant.com
COMMENT=	Send SMTP email from a Flask web application

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0.9:www/py-flask@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}blinker>=0:devel/py-blinker@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
