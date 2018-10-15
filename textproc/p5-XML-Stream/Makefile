# Created by: Yen-Ming Lee <leeym@cae.ce.ntu.edu.tw>
# $FreeBSD: head/textproc/p5-XML-Stream/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	XML-Stream
DISTVERSION=	1.24
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DAPATRICK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XML::Stream provides you with access to XML Stream

LICENSE=	LGPL21

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Authen-SASL>=0:security/p5-Authen-SASL

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
