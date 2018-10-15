# Created by: will
# $FreeBSD: head/www/p5-WWW-Robot/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	WWW-Robot
PORTVERSION=	0.026
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	WWW::Robot - configurable web traversal engine

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-HTML-Tree>=0:www/p5-HTML-Tree \
		p5-libwww>=0:www/p5-libwww \
		p5-HTML-Tagset>=0:www/p5-HTML-Tagset

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
