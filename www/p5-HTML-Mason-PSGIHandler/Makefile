# $FreeBSD: head/www/p5-HTML-Mason-PSGIHandler/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	HTML-Mason-PSGIHandler
PORTVERSION=	0.53
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PSGI handler for HTML::Mason

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-CGI-PSGI>0:www/p5-CGI-PSGI \
		p5-HTML-Mason>0:www/p5-HTML-Mason
TEST_DEPENDS=	p5-Plack>=0:www/p5-Plack

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
