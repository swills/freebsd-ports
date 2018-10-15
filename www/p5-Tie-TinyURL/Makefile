# Created by: chinsan
# $FreeBSD: head/www/p5-Tie-TinyURL/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Tie-TinyURL
PORTVERSION=	0.02
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Tied interface to TinyURL.com

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-libwww>=0:www/p5-libwww

USES=		perl5
USE_PERL5=	modbuild
CONFIGURE_ARGS=	</dev/null

.include <bsd.port.mk>
