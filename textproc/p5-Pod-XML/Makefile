# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/textproc/p5-Pod-XML/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Pod-XML
PORTVERSION=	0.99
PORTREVISION=	3
CATEGORIES=	textproc devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module to convert POD to XML

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-IO-stringy>=0:devel/p5-IO-stringy
TEST_DEPENDS=	p5-Test-File-Contents>=0:devel/p5-Test-File-Contents

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
