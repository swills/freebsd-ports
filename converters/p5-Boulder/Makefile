# Created by: Andreas Klemm <andreas@klemm.gtn.com>
# $FreeBSD: head/converters/p5-Boulder/Makefile 479390 2018-09-10 11:16:59Z des $

PORTNAME=	Boulder
PORTVERSION=	1.30
PORTREVISION=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	API for hierarchical tag/value structures

BUILD_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
