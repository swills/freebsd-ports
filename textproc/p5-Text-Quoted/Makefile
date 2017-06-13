# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: head/textproc/p5-Text-Quoted/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Text-Quoted
PORTVERSION=	2.09
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Text::Quoted - Extract the structure of a quoted mail message

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Text-Autoformat>=0:textproc/p5-Text-Autoformat
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
