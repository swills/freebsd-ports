# Created by: Andreas Klemm <andreas@klemm.gtn.com>
# $FreeBSD: head/converters/p5-Boulder/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Boulder
PORTVERSION=	1.30
PORTREVISION=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	API for hierarchical tag/value structures

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-XML-Parser>=0:textproc/p5-XML-Parser

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
