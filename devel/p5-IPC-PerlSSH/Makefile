# Created by: Niels Kristensen <niels@kristensen.io>
# $FreeBSD: head/devel/p5-IPC-PerlSSH/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	IPC-PerlSSH
PORTVERSION=	0.17
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	niels@kristensen.io
COMMENT=	Class for executing remote perl code over an SSH link

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
