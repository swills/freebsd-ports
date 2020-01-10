# Created by: mzaki@biol.s.u-tokyo.ac.jp
# $FreeBSD$

PORTNAME=	mrbayes
PORTVERSION=	3.2.7a
CATEGORIES=	biology
MASTER_SITES=	https://github.com/NBISweden/MrBayes/releases/download/v${PORTVERSION}/

MAINTAINER=	mzaki@e-mail.ne.jp
COMMENT=	Bayesian inference of phylogeny

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		readline:port

GNU_CONFIGURE=	yes

OPTIONS_DEFINE=		DOCS EXAMPLES

OPTIONS_DEFINE_i386=	SSE AVX FMA
OPTIONS_DEFINE_amd64=	SSE AVX FMA
OPTIONS_DEFAULT_amd64=	SSE
SSE_CONFIGURE_OFF=	--disable-sse
AVX_DESC=		Use AVX optimized routines
AVX_IMPLIES=		SSE
AVX_CONFIGURE_OFF=	--disable-avx
FMA_DESC=		Use FMA optimized routines
FMA_IMPLIES=		SSE AVX
FMA_CONFIGURE_OFF=	--disable-fma

OPTIONS_RADIO=		MPI
OPTIONS_RADIO_MPI=	MPICH OPENMPI
MPICH_LIB_DEPENDS=	libmpich.so:net/mpich
MPICH_CONFIGURE_ON=	--with-mpi
MPICH_CONFIGURE_ENV=	CC="${LOCALBASE}/bin/mpicc"
OPENMPI_LIB_DEPENDS=	libmpi.so:net/openmpi
OPENMPI_CONFIGURE_ON=	--with-mpi
OPENMPI_CONFIGURE_ENV=	CC="${LOCALBASE}/mpi/openmpi/bin/mpicc"

OPTIONS_EXCLUDE_i386=	OPENMPI

.include <bsd.port.mk>
