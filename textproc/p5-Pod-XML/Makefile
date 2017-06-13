# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/textproc/p5-Pod-XML/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Pod-XML
PORTVERSION=	0.99
PORTREVISION=	3
CATEGORIES=	textproc devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module to convert POD to XML

BUILD_DEPENDS=	p5-IO-stringy>=0:devel/p5-IO-stringy
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-File-Contents>=0:devel/p5-Test-File-Contents

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
