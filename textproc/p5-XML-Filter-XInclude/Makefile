# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: head/textproc/p5-XML-Filter-XInclude/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	XML-Filter-XInclude
PORTVERSION=	1.0
PORTREVISION=	2
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	XInclude as a SAX Filter

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-URI>=0:net/p5-URI \
		p5-XML-SAX>=0:textproc/p5-XML-SAX \
		p5-XML-SAX-Writer>=0:textproc/p5-XML-SAX-Writer

MAKE_JOBS_UNSAFE=	yes

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
