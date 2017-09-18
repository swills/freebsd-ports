# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/textproc/p5-String-Truncate/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	String-Truncate
PORTVERSION=	1.100602
PORTREVISION=	1
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Module for when strings are too long to be displayed

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Sub-Exporter>=0.953:devel/p5-Sub-Exporter \
		p5-Sub-Install>=0.03:devel/p5-Sub-Install
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
