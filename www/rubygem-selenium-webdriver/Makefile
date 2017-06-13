# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/www/rubygem-selenium-webdriver/Makefile 439157 2017-04-22 10:58:16Z sunpoet $

PORTNAME=	selenium-webdriver
PORTVERSION=	3.4.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Tool for writing automated tests of websites

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-childprocess>=0.5:devel/rubygem-childprocess \
		rubygem-rubyzip>=1.0:archivers/rubygem-rubyzip \
		rubygem-websocket>=1.0:www/rubygem-websocket

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
