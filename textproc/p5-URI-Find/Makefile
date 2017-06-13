# Created by: Pete Fritchman <petef@databits.net>
# $FreeBSD: head/textproc/p5-URI-Find/Makefile 432932 2017-01-31 16:21:45Z mat $

PORTNAME=	URI-Find
PORTVERSION=	20160806
PORTREVISION=	1
CATEGORIES=	textproc net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to find URIs in arbitrary text

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-URI>=1:net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
