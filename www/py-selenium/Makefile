# Created by: Douglas Thrift <douglas@douglasthrift.net>
# $FreeBSD: head/www/py-selenium/Makefile 456661 2017-12-18 17:39:24Z sunpoet $

PORTNAME=	selenium
PORTVERSION=	3.8.0
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	douglas@douglasthrift.net
COMMENT=	Python bindings for Selenium

LICENSE=	APACHE20

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

OPTIONS_DEFINE=	FIREFOX
FIREFOX_DESC=	Install Firefox

FIREFOX_USES=	gecko:firefox

# Don't install binary Firefox extension
post-extract:
	@${RM} ${WRKSRC}/selenium/webdriver/firefox/amd64/x_ignore_nofocus.so
	@${RM} ${WRKSRC}/selenium/webdriver/firefox/x86/x_ignore_nofocus.so

.include <bsd.port.mk>
