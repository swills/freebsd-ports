# Created by: Gabor Kovesdan
# $FreeBSD: head/security/p5-Crypt-X509/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	Crypt-X509
PORTVERSION=	0.51
PORTREVISION=	1
CATEGORIES=	security perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ashish@FreeBSD.org
COMMENT=	Perl extension to parse X.509 certificates

BUILD_DEPENDS=	p5-Convert-ASN1>=0:converters/p5-Convert-ASN1
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
