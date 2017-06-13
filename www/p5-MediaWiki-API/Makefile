# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/www/p5-MediaWiki-API/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	MediaWiki-API
PORTVERSION=	0.41
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	OOP MediaWiki engine client

LICENSE=	GPLv3

BUILD_DEPENDS=	p5-JSON>=0:converters/p5-JSON \
		p5-libwww>=0:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-JSON-Any>=0:converters/p5-JSON-Any

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
