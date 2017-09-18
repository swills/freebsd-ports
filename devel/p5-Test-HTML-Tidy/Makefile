# Created by: rafan@FreeBSD.org
# $FreeBSD: head/devel/p5-Test-HTML-Tidy/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	Test-HTML-Tidy
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Test::More-style wrapper around HTML::Tidy

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-HTML-Tidy>=0:textproc/p5-HTML-Tidy
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
