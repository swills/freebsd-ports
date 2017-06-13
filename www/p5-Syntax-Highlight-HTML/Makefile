# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/www/p5-Syntax-Highlight-HTML/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Syntax-Highlight-HTML
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Syntax::Highlight::HTML - Highlight HTML syntax

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTML-Parser>=0:www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
