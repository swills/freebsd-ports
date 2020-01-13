# $FreeBSD$

PORTNAME=	newlib
PORTVERSION=	3.1.0
CATEGORIES=	devel
MASTER_SITES=	ftp://sources.redhat.com/pub/${PORTNAME}/ \
		SOURCEWARE/${PORTNAME}
PKGNAMEPREFIX=	${NEWLIB_TARGET}-

MAINTAINER=	kevans@FreeBSD.org
COMMENT=	Newlib distribution for ${NEWLIB_TARGET} targets

BUILD_DEPENDS+=	${NEWLIB_TARGET}-ar:devel/binutils@${NEWLIB_TARGET:C/-/_/g} \
		${NEWLIB_TARGET}-as:devel/binutils@${NEWLIB_TARGET:C/-/_/g} \
		${NEWLIB_TARGET}-ld:devel/binutils@${NEWLIB_TARGET:C/-/_/g} \
		${LOCALBASE}/bin/${NEWLIB_TARGET}-gcc:devel/${NEWLIB_TARGET}-gcc

USES=		gmake makeinfo
HAS_CONFIGURE=	yes
CONFIGURE_ARGS+=	--prefix=${PREFIX} --target="${NEWLIB_TARGET}" \
		--disable-newlib-supplied-syscalls
NEWLIB_TARGET?=	arm-none-eabi

post-install:
	${RM} -r ${STAGEDIR}${PREFIX}/${NEWLIB_TARGET}/include

.include <bsd.port.mk>
