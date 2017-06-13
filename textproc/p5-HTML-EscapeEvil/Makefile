# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: head/textproc/p5-HTML-EscapeEvil/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	HTML-EscapeEvil
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	textproc perl5 www
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Escape evil HTML tags

BUILD_DEPENDS=	p5-HTML-Tree>=0:www/p5-HTML-Tree \
		p5-Class-Accessor>=0:devel/p5-Class-Accessor \
		p5-HTML-Parser>=0:www/p5-HTML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
