# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/www/p5-Test-HTTP/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Test-HTTP
PORTVERSION=	0.18
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test HTTP interactions

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Class-Field>=0:devel/p5-Class-Field \
		p5-libwww>=5.827:www/p5-libwww
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
