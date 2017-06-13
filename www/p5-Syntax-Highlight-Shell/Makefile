# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/www/p5-Syntax-Highlight-Shell/Makefile 412351 2016-04-01 14:33:55Z mat $

PORTNAME=	Syntax-Highlight-Shell
PORTVERSION=	0.04
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Syntax::Highlight::Shell - Highlight shell scripts

BUILD_DEPENDS=	p5-Shell-Parser>=0:devel/p5-Shell-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
