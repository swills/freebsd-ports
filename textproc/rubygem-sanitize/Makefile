# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: head/textproc/rubygem-sanitize/Makefile 465310 2018-03-22 19:53:36Z sunpoet $

PORTNAME=	sanitize
PORTVERSION=	4.6.4
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Whitelist based HTML sanitizer

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-crass>=1.0.2:www/rubygem-crass \
		rubygem-nokogiri>=1.4.4:textproc/rubygem-nokogiri \
		rubygem-nokogumbo>=1.4:textproc/rubygem-nokogumbo

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
