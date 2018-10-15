# Created by: Vadim Vatlin
# $FreeBSD: head/textproc/p5-Unicode-Escape/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Unicode-Escape
PORTVERSION=	0.0.2
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	Escape and unescape Unicode characters other than ASCII

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Unicode-String>=0:converters/p5-Unicode-String

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
