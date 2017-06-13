# Created by: ports@c0decafe.net
# $FreeBSD: head/textproc/p5-XML-LibXML-SAX-ChunkParser/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	XML-LibXML-SAX-ChunkParser
PORTVERSION=	0.00008
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Parse XML chunks via LibXML SAX

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-XML-LibXML>=1.66:textproc/p5-XML-LibXML \
		p5-XML-SAX>=0:textproc/p5-XML-SAX
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

USE_PERL5=	modbuild
USES=		perl5

.include <bsd.port.mk>
