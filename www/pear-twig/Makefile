# Created by: Joe Horn <joehorn@gmail.com>
# $FreeBSD: head/www/pear-twig/Makefile 470131 2018-05-16 17:09:34Z joneum $

PORTNAME=	twig
PORTVERSION=	1.29.0
CATEGORIES=	www pear
MASTER_SITES=	http://pear.twig-project.org/get/
DISTNAME=	Twig-${PORTVERSION}

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Flexible, fast, and secure template engine for PHP

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		pear php:cli
PEAR_CHANNEL=	twig
NO_ARCH=	yes

USE_PHP=	ctype hash

.include <bsd.port.mk>
