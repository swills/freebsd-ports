# Created by: Nick Hilliard <nick@foobar.org>
# $FreeBSD: head/www/p5-MasonX-Request-WithApacheSession/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	MasonX-Request-WithApacheSession
PORTVERSION=	0.31
PORTREVISION=	2
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Interface to Apache::Session for HTML::Mason

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Mason>=0:www/p5-HTML-Mason \
		p5-Apache-Session-Wrapper>=0:www/p5-Apache-Session-Wrapper

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
