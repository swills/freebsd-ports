# $FreeBSD: head/mail/py-flask-mail/Makefile 469899 2018-05-14 15:31:19Z miwi $

PORTNAME=	Flask-Mail
PORTVERSION=	0.9.1
CATEGORIES=	mail www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	john@saltant.com
COMMENT=	Send SMTP email from a Flask web application

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Flask>=0.9:www/py-flask@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}blinker>=0:devel/py-blinker@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

.include <bsd.port.mk>
