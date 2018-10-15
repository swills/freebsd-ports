# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/p5-Plack-Middleware-FixMissingBodyInRedirect/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Plack-Middleware-FixMissingBodyInRedirect
PORTVERSION=	0.12
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Sets body for redirect response, if it is not already set

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser \
		p5-Plack>=0:www/p5-Plack
TEST_DEPENDS=	p5-HTTP-Message>=0:www/p5-HTTP-Message

USE_PERL5=	configure
USES=		perl5

.include <bsd.port.mk>
