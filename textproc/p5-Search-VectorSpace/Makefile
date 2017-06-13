# Created by: clsung
# $FreeBSD: head/textproc/p5-Search-VectorSpace/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Search-VectorSpace
PORTVERSION=	0.02
PORTREVISION=	10
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Very basic vector-space search engine perl module

BUILD_DEPENDS=	PDL>=0:math/PDL \
		p5-Lingua-Stem>=0:textproc/p5-Lingua-Stem
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
